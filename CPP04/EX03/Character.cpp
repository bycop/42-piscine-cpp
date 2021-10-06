# include "Character.hpp"

Character::Character(void)
{
	_name = "Unnamed";
	_nbMateria = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

Character::Character(std::string const &name)
{
	_name = name;
	_nbMateria = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

Character::Character(Character const &character)
{
	_name = character._name;
	_nbMateria = 0;
	for (int i = 0 ; i < character.getNbMateria() ; i++)
		equip(character._materia[i]->clone());
	for (int i = character.getNbMateria() ; i < 4 ; i++)
		_materia[i] = nullptr;
}

Character   &Character::operator=(Character const &character)
{
	for (int i = 0; i < getNbMateria(); i++)
	{
		unequip(i);
		delete _materia[i];
	}
	for (int i = 0 ; i < character.getNbMateria(); i++)
		equip(character._materia[i]->clone());
	for (int i = character.getNbMateria() ; i < 4 ; i++)
		_materia[i] = nullptr;
	_name = character.getName();
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < _nbMateria; i++)
		delete _materia[i];
}

std::string const &Character::getName(void) const
{
	return _name;
}

int	Character::getNbMateria(void) const
{
	return _nbMateria;
}

void	Character::equip(AMateria* m)
{
	if (_nbMateria < 3 && m != nullptr)
	{
		for (int i = 0; i < _nbMateria; i++)
			if (_materia[i] == m)
				return ;
		_materia[_nbMateria] = m;
		_nbMateria++;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 0 && _nbMateria > 0 && _materia[idx] != nullptr)
	{
		for (int i = idx ; i < 3 ; i++)
		{
			_materia[i] = _materia[i + 1];
			_materia[i + 1] = nullptr;
		}
	}
	_nbMateria--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= _nbMateria && _materia[idx] != nullptr)
		_materia[idx]->use(target);
}

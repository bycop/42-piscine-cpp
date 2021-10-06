#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _nb = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &materiasource)
{
    _nb = 0;
	for (int i = 0; i < materiasource._nb; i++)
		learnMateria(materiasource._materias[i]->clone());
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _nb; i++)
		delete _materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materiasource)
{
    for (int i = 0; i < _nb; i++)
        delete _materias[i];
    for (int i = 0 ; i < materiasource._nb; i++)
        learnMateria(materiasource._materias[i]->clone());
    for (int i = materiasource._nb ; i < 4 ; i++)
        _materias[i] = nullptr;
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_nb < 3 && m != nullptr)
    {
        for (int i = 0; i < _nb; i++)
            if (_materias[i] == m)
                return ;
        _materias[_nb] = m;
        _nb++;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _nb; i++)
		if (_materias[i]->getType() == type)
			return (_materias[i]->clone());
	return (nullptr);
}
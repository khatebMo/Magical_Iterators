#include "MagicalContainer.hpp"
#include <iostream>
#include <vector>
namespace ariel
{

    //==============MagicalContainer Class=======
    MagicalContainer::MagicalContainer()
    {
    }
    MagicalContainer::~MagicalContainer()
    {
    }
    void MagicalContainer::addElement(int element)
    {
    }
    int MagicalContainer::size() const
    {
        return element.size();
    }
    void MagicalContainer::removeElement(int removed)
    {
    }
    vector<int> MagicalContainer::getElements() const
    {
        return element;
    }

    //===========AscendingIterator Class================

    MagicalContainer::AscendingIterator::~AscendingIterator()
    {
    }
    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &magicalContainer) : container(magicalContainer)
    {
    }
    MagicalContainer ::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container)
    {
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator ::begin()
    {
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator ::end()
    {
        return *this;
    }

    int MagicalContainer::AscendingIterator::operator*() const
    {
        return 0;
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
    {
        return *this;
    }
    bool MagicalContainer::AscendingIterator ::operator!=(const AscendingIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator ::operator==(const AscendingIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &) const
    {
        return false;
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {
        return *this;
    }

    //==================SideCrossIterator Class==========
    MagicalContainer::SideCrossIterator::~SideCrossIterator()
    {
    }
    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &magicalContainer) : container(magicalContainer)
    {
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator ::begin()
    {
        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator ::end()
    {
        return *this;
    }
    int MagicalContainer::SideCrossIterator::operator*() const
    {
        return 0;
    }
    bool MagicalContainer::SideCrossIterator ::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator ::operator==(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &) const
    {
        return false;
    }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {
        return *this;
    }
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &) const
    {
        return false;
    }

    //==============PrimeIterator Class==========
    MagicalContainer::PrimeIterator::~PrimeIterator()
    {
    }
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &magicalContainer) : container(magicalContainer)
    {
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator ::begin()
    {
        return *this;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator ::end()
    {
        return *this;
    }
    int MagicalContainer::PrimeIterator::operator*() const
    {
        return 0;
    }
    bool MagicalContainer::PrimeIterator ::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator ::operator==(const PrimeIterator &other) const
    {
        return false;
    }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &) const
    {
        return false;
    }
}
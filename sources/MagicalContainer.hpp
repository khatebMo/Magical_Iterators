#include <vector>
using namespace std;
namespace ariel
{

    class MagicalContainer
    {
    private:
        vector<int> element;

    public:
        ~MagicalContainer();
        MagicalContainer();
        void addElement(int);
        int size() const;
        void removeElement(int);
        vector<int> getElements() const;

        class AscendingIterator
        {
        private:
            MagicalContainer &container;

        public:
            AscendingIterator();
            ~AscendingIterator();
            AscendingIterator operator&(AscendingIterator &&) = delete;
            AscendingIterator(MagicalContainer &);
            AscendingIterator(const AscendingIterator&);
            
            AscendingIterator begin();
            AscendingIterator end();

            AscendingIterator &operator=(const AscendingIterator&);
            int operator*() const;
            bool operator!=(const AscendingIterator &) const;
            bool operator==(const AscendingIterator &)const;
            bool operator<(const AscendingIterator &)const;
            bool operator>(const AscendingIterator &)const;
            AscendingIterator &operator++();
        };
        class SideCrossIterator
        {
        private:
            MagicalContainer &container;

        public:
            SideCrossIterator();
            ~ SideCrossIterator();
            
            SideCrossIterator(MagicalContainer &);
            SideCrossIterator begin();
            SideCrossIterator end();

            SideCrossIterator operator&(SideCrossIterator &&) = delete;
            int operator*() const;
            bool operator!=(const SideCrossIterator &) const;
            bool operator==(const SideCrossIterator &)const;
            bool operator<(const SideCrossIterator &)const;
            bool operator>(const SideCrossIterator &)const;
            SideCrossIterator &operator++();
        };
        class PrimeIterator
        {
        private:
            MagicalContainer &container;

        public:
            PrimeIterator();
            ~PrimeIterator();
            PrimeIterator operator&(PrimeIterator &&) = delete;
            PrimeIterator(MagicalContainer &);
            PrimeIterator begin();
            PrimeIterator end();
            int operator*() const;
            bool operator!=(const PrimeIterator &) const;
            PrimeIterator &operator++();
            bool operator==(const PrimeIterator &)const;
            bool operator<(const PrimeIterator &)const;
            bool operator>(const PrimeIterator &)const;
        };
    };
}
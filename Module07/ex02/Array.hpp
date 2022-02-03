template <typename T>
class Array {
private:
    T *mas;
    unsigned int size;
public:
    Array() {
        this->mas = new T();
    };

    Array(T n) {
        this->size = n;
        this->mas = new T[n]();
    };

    virtual ~Array() {
        delete this->mas;
    }

    Array &operator=(const Array<T> &other) {
        this->size = other.size;
        for (int i = 0; i < this->size; i++) {
            this->mas[i] = other.mas[i];
        }
        return *this;
    };

    Array(const Array &other) {
        this->size = other.size;
        this->mas = new T[this->size]();

        for (int i = 0; i < (int)this->size; i++) {
            this->mas[i] = other.mas[i];
        }
    };

    T& operator[](unsigned int index)
    {
        if (index > size)
            throw std::out_of_range("index_out_of_range");
        return (mas[index]);
    };

    unsigned int Size() const
    {
        return this->size;
    }
};
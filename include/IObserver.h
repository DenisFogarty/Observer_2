#ifndef IOBSERVER_H
#define IOBSERVER_H


class IObserver
{
    public:
        IObserver();
        virtual ~IObserver();

        virtual void update() = 0;

    protected:

    private:
};

#endif // IOBSERVER_H

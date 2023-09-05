#include <iostream>
using namespace std;

class Ticket {
private:
    int ticketId;

public:
    Ticket(int id) : ticketId(id) {}

    int getTicketId() const {
        return ticketId;
    }
};

class Reservation;

class Reservation {
private:
    Ticket* reservedTickets[10];  // Assuming a maximum of 10 reservations

public:
    Reservation() {
        for (int i = 0; i < 10; i++) {
            reservedTickets[i] = nullptr;
        }
    }

    friend void cancelReservation(Reservation&, const Ticket&);

    void reserveTicket(const Ticket& ticket) {
        for (int i = 0; i < 10; i++) {
            if (reservedTickets[i] == nullptr) {
                reservedTickets[i] = new Ticket(ticket.getTicketId());
                cout << "Ticket " << ticket.getTicketId() << " reserved." << endl;
                return;
            }
        }
        cout << "No available slots for reservation." << endl;
    }

    void displayReservedTickets() const {
        cout << "Reserved Tickets: ";
        for (int i = 0; i < 10; i++) {
            if (reservedTickets[i] != nullptr) {
                cout << reservedTickets[i]->getTicketId() << " ";
            }
        }
        cout << endl;
    }

    ~Reservation() {
        for (int i = 0; i < 10; i++) {
            delete reservedTickets[i];
        }
    }
};

void cancelReservation(Reservation& reservation, const Ticket& ticket) {
    for (int i = 0; i < 10; i++) {
        if (reservation.reservedTickets[i] != nullptr && reservation.reservedTickets[i]->getTicketId() == ticket.getTicketId()) {
            delete reservation.reservedTickets[i];
            reservation.reservedTickets[i] = nullptr;
            cout << "Ticket " << ticket.getTicketId() << " canceled." << endl;
            return;
        }
    }
    cout << "Ticket " << ticket.getTicketId() << " not found for cancellation." << endl;
}

int main() {
    Ticket t1(101);
    Ticket t2(102);
    Ticket t3(103);

    Reservation r;

    r.reserveTicket(t1);
    r.reserveTicket(t2);
    r.reserveTicket(t3);

    r.displayReservedTickets();

    cancelReservation(r, t2);

    r.displayReservedTickets();

    return 0;
}
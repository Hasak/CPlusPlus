#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;
using namespace::boost::asio;

serial_port_base::baud_rate BAUD(9600);
serial_port_base::parity PARITY(serial_port_base::parity::none);
serial_port_base::stop_bits STOP(serial_port_base::stop_bits::one);

void SendDataViaSerialPort(const std::string& to_write)
{
        io_service io;
        serial_port port(io, "COM29");

        port.set_option(BAUD);
        port.set_option(PARITY);
        port.set_option(STOP);

        write(port, buffer(to_write,1));
}

int main()
{
    time_t result = time(0);
    cout << asctime(localtime(&result))<< result << " seconds since the Epoch\n";
    SendDataViaSerialPort(result);
}

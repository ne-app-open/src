FROM debian

# Update & upgrade APT.

RUN apt-get update && apt-get upgrade -y

RUN ./install.sh

# Expose NeSystem ports.

EXPOSE 8080/tcp
EXPOSE 8080/udp
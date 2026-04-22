FROM debian

# Update & upgrade APT.

RUN apt-get update && apt-get upgrade -y

COPY ./ ./src
RUN ./src/install.sh

# Expose NeSystem ports.

# Reserved for NeSystem
EXPOSE 8080/tcp

# NeSystem too (UDP)
EXPOSE 8080/udp
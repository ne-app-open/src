FROM debian

# Update & upgrade APT.

RUN apt-get update && apt-get upgrade -y

COPY ./ ./src/

# Expose NeSystem ports for file sharing.

# Reserved for NeSystem
EXPOSE 8080/tcp

# NeSystem too (UDP)
EXPOSE 8080/udp
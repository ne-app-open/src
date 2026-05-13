FROM debian

# Update & upgrade APT.

RUN apt-get update && apt-get upgrade -y

COPY ./ ./src/

# Expose ports for file sharing/debugging.

# Reserved begin.

EXPOSE 8080/tcp
EXPOSE 8080/udp

# End of reserved.
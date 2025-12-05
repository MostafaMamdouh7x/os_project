FROM alpine

WORKDIR /app

# Copy source file
COPY main.cpp .

# Install compiler
RUN apk add --update g++

# Compile during build
RUN g++ main.cpp -o main

# Run app
CMD ["./main"]

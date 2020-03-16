FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
   && apt-get -y install --no-install-recommends git ca-certificates \
   && apt-get -y install gnupg1 gnupg2 curl \
   && curl https://bazel.build/bazel-release.pub.gpg | apt-key add - \
   && echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list \
   && apt-get update \
   && apt-get -y install --no-install-recommends bazel \
   && apt-get -y install --no-install-recommends build-essential cmake cppcheck valgrind gdb \
   && apt-get autoremove -y \
   && apt-get clean -y \
   && rm -rf /var/lib/apt/lists/*
ENV DEBIAN_FRONTEND=dialog


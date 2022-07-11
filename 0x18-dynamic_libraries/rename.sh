#!/bin/bash
for file in *; do mv "${file}" "${file/5-/}"; done
for file in *; do mv "${file}" "${file/6-/}"; done
for file in *; do mv "${file}" "${file/9-/}"; done	

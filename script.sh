#!/bin/bash

nvidia-smi -q -d TEMPERATURE -f ~/.config/i3status/gpu_t/GPU
nvidia-smi -q -d UTILIZATION -f ~/.config/i3status/gpu_t/GPU1
nvidia-smi -q -d MEMORY -f ~/.config/i3status/gpu_t/GPU3
exec /home/vasilii/.config/i3status/gpu_t/GPU.out &
exec /home/vasilii/.config/i3status/gpu_t/GPU_util.out &
exec /home/vasilii/.config/i3status/gpu_t/GPU_mem.out

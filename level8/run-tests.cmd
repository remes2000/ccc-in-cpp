@echo off
for %%f in (./input/*.in) do (
    program ./input/%%f > ./output/%%~nf.out
)
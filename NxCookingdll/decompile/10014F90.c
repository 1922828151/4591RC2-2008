/*
 * func-name: sub_10014F90
 * func-address: 0x10014f90
 * callers: 0x100122c0
 * callees: 0x10014dc0, 0x100358bf, 0x100359ff, 0x10035c63, 0x10035d58
 */

int __thiscall sub_10014F90(int this, char *FileName)
{
  FILE *v3; // eax
  FILE *v4; // edi
  int v5; // ebp
  FILE *v6; // eax
  FILE *v7; // edi

  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_WORD *)(this + 20) = 0;
  *(_WORD *)(this + 22) = 0;
  *(_BYTE *)(this + 24) = 0;
  *(_BYTE *)(this + 25) = 0;
  if ( !FileName || (v3 = fopen(FileName, "rb"), (v4 = v3) == 0) || (fseek(v3, 0, 2), v5 = ftell(v4), fclose(v4), !v5) )
    v5 = 4096;
  v6 = fopen(FileName, "rb");
  v7 = v6;
  if ( v6 )
  {
    sub_10014DC0((void ***)this, v5, 0, v6, 0);
    fclose(v7);
  }
  return this;
}

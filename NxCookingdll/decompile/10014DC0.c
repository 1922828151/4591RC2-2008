/*
 * func-name: sub_10014DC0
 * func-address: 0x10014dc0
 * callers: 0x10014f50, 0x10014f90, 0x100152a0
 * callees: 0x10014910, 0x10035300, 0x1003625a
 */

void **__thiscall sub_10014DC0(void ***this, int Size, void *Src, FILE *Stream, void **a5)
{
  int (__stdcall ***v6)(size_t, int); // eax
  int *v7; // eax
  int *v8; // esi
  int (__stdcall ***v9)(size_t, int); // eax
  int v10; // eax
  void **result; // eax

  v6 = sub_10014910();
  v7 = (int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v6)(v6, 16, 36);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v7[3] = 0;
    v7[2] = Size;
    v9 = sub_10014910();
    v10 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v9)(v9, v8[2], 65);
    *v8 = v10;
    if ( v10 )
    {
      v8[1] = 0;
      *this = (void **)v8;
    }
  }
  result = *this;
  this[1] = *this;
  if ( Src )
  {
    memcpy_0(*result, Src, Size);
    goto LABEL_7;
  }
  if ( Stream )
  {
    fread(*result, Size, 1u, Stream);
LABEL_7:
    result = a5;
    (*this)[1] = a5;
  }
  this[4] = (void **)**this;
  return result;
}

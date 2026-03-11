/*
 * func-name: sub_1002CF30
 * func-address: 0x1002cf30
 * callers: 0x10020b00, 0x1002e590
 * callees: 0x10014910, 0x1002b9c0, 0x1002bb80
 */

char __thiscall sub_1002CF30(int this, int a2)
{
  char result; // al
  unsigned int *v4; // ebx
  _DWORD *v5; // ebp
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // edi
  int (__stdcall ***v9)(size_t, int); // eax
  int v10; // eax
  int (__stdcall ***v11)(size_t, int); // eax
  int v12; // eax

  sub_1002B9C0(this);
  *(_BYTE *)(this + 280) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(this + 281) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(this + 282) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(this + 283) = *(_BYTE *)(a2 + 31);
  *(_BYTE *)(this + 284) = *(_BYTE *)(a2 + 32);
  *(_BYTE *)(this + 285) = *(_BYTE *)(a2 + 33);
  *(_BYTE *)(this + 286) = *(_BYTE *)(a2 + 34);
  *(_BYTE *)(this + 287) = *(_BYTE *)(a2 + 35);
  *(_BYTE *)(this + 288) = *(_BYTE *)(a2 + 36);
  *(_BYTE *)(this + 289) = *(_BYTE *)(a2 + 37);
  *(_BYTE *)(this + 290) = *(_BYTE *)(a2 + 38);
  *(_BYTE *)(this + 291) = *(_BYTE *)(a2 + 39);
  result = sub_1002BB80(*(_DWORD *)a2, *(void **)(a2 + 16), (_DWORD *)(this + 236), (_DWORD *)(this + 212));
  if ( result )
  {
    v4 = (unsigned int *)(this + 216);
    v5 = (_DWORD *)(this + 240);
    if ( !sub_1002BB80(*(_DWORD *)(a2 + 8), *(void **)(a2 + 20), (_DWORD *)(this + 240), (_DWORD *)(this + 216))
      || !sub_1002BB80(*(_DWORD *)(a2 + 12), *(void **)(a2 + 24), (_DWORD *)(this + 244), (_DWORD *)(this + 220)) )
    {
      return 0;
    }
    if ( !*(_BYTE *)(this + 281) )
    {
      if ( *v5 )
      {
        v6 = 0;
        if ( *v4 )
        {
          v7 = 0;
          do
          {
            *(float *)(v7 + *v5 + 8) = 0.0;
            ++v6;
            v7 += 12;
          }
          while ( v6 < *v4 );
        }
      }
    }
    v8 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(this + 208) = v8;
    if ( v8
      && (v9 = sub_10014910(),
          v10 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v9)(
                  v9,
                  48 * *(_DWORD *)(this + 208),
                  0),
          (*(_DWORD *)(this + 248) = v10) != 0) )
    {
      v11 = sub_10014910();
      v12 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v11)(
              v11,
              36 * *(_DWORD *)(this + 208),
              0);
      *(_DWORD *)(this + 252) = v12;
      return v12 != 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

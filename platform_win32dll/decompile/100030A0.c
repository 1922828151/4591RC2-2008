/*
 * func-name: sub_100030A0
 * func-address: 0x100030a0
 * callers: none
 * callees: 0x10019750
 */

int __thiscall sub_100030A0(_DWORD **this)
{
  _DWORD **v2; // ebp
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax
  int v7; // [esp+10h] [ebp-248h] BYREF
  _BYTE v8[576]; // [esp+14h] [ebp-244h] BYREF

  v2 = this + 1523;
  v3 = this + 1523;
  v4 = 4;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      v7 = 580;
      if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 60))(v5, &v7)
        || (*(int (__stdcall **)(_DWORD *, _BYTE *))(*this[1520] + 20))(this[1520], v8) )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
        *v3 = 0;
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return (*(int (__stdcall **)(_DWORD *, int, int (__stdcall *)(int, int), _DWORD **, int))(*this[1520] + 16))(
           this[1520],
           4,
           sub_10002DC0,
           v2,
           1);
}

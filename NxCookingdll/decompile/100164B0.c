/*
 * func-name: sub_100164B0
 * func-address: 0x100164b0
 * callers: 0x10022c20, 0x100302d0
 * callees: none
 */

int __cdecl sub_100164B0(unsigned __int16 a1, unsigned int a2, int a3, int a4, char a5)
{
  unsigned int v5; // esi
  int result; // eax
  unsigned __int16 v7; // cx
  int v8; // [esp+14h] [ebp+4h]

  v5 = 0;
  if ( a1 > 0xFFu )
  {
    if ( a2 )
    {
      do
      {
        v7 = *(_WORD *)(a3 + 2 * v5);
        v8 = v7;
        if ( a5 )
        {
          LOBYTE(v8) = HIBYTE(v7);
          BYTE1(v8) = v7;
        }
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 32))(a4, v8);
        ++v5;
      }
      while ( v5 < a2 );
    }
  }
  else if ( a2 )
  {
    do
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, *(unsigned __int8 *)(a3 + 2 * v5++));
    while ( v5 < a2 );
  }
  return result;
}

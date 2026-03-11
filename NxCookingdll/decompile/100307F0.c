/*
 * func-name: sub_100307F0
 * func-address: 0x100307f0
 * callers: 0x10030940
 * callees: 0x10034f10
 */

int __cdecl sub_100307F0(int a1, int a2, unsigned int a3, size_t Size, int a5, int a6)
{
  unsigned int v6; // ebx
  void *v7; // esi
  unsigned int v8; // ebp
  int v9; // eax
  int *v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int i; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v6 = 0;
  v18 = 0;
  v7 = (void *)(*(int (__thiscall **)(int, size_t, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, Size, 1);
  memset(v7, 0, Size);
  v8 = 0;
  v20 = 0;
  for ( i = 0; v8 < a3; v20 = v19 )
  {
    v9 = *(_DWORD *)(a6 + 4 * v8);
    v10 = (int *)(a2 + 12 * v9);
    v11 = v10[1];
    v19 = *(_DWORD *)(a5 + 4 * v9);
    v12 = v10[2];
    if ( !*((_BYTE *)v7 + *v10) )
    {
      *((_BYTE *)v7 + *v10) = 1;
      ++v6;
    }
    if ( !*((_BYTE *)v7 + v11) )
    {
      *((_BYTE *)v7 + v11) = 1;
      ++v6;
    }
    if ( !*((_BYTE *)v7 + v12) )
    {
      *((_BYTE *)v7 + v12) = 1;
      ++v6;
    }
    if ( v19 != v20 || v6 >= 0x20 || i == 31 )
    {
      ++v18;
      v6 = 0;
      i = 0;
      memset(v7, 0, Size);
      v13 = v10[2];
      v14 = v10[1];
      v15 = *v10;
      if ( !*((_BYTE *)v7 + v15) )
      {
        *((_BYTE *)v7 + v15) = 1;
        v6 = 1;
      }
      if ( !*((_BYTE *)v7 + v14) )
      {
        *((_BYTE *)v7 + v14) = 1;
        ++v6;
      }
      if ( !*((_BYTE *)v7 + v13) )
      {
        *((_BYTE *)v7 + v13) = 1;
        ++v6;
      }
    }
    ++i;
    *(_DWORD *)(a1 + 4 * *(_DWORD *)(a6 + 4 * v8++)) = v18;
  }
  if ( v7 )
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v7);
  return v18 + 1;
}

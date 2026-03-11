/*
 * func-name: sub_10056DA0
 * func-address: 0x10056da0
 * callers: 0x1000d6b1
 * callees: 0x100074ff, 0x1000a362, 0x102c9d50
 */

unsigned int __thiscall sub_10056DA0(int this, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  int v7; // esi
  rsize_t v8; // eax
  char *v9; // ecx
  bool v10; // zf
  int v11; // esi
  rsize_t v12; // edx
  char *v13; // esi
  char *v14; // edi
  unsigned int v15; // ecx
  int v16; // ebp
  int v17; // eax
  int v18; // esi
  rsize_t v19; // eax
  char *v20; // esi
  unsigned int result; // eax
  int v22; // [esp+0h] [ebp-Ch]
  void *v23; // [esp+4h] [ebp-8h]
  char *v24; // [esp+4h] [ebp-8h]
  char *Destination; // [esp+8h] [ebp-4h]

  v2 = a2;
  v4 = *(_DWORD *)(this + 8);
  if ( 0xFFFFFFF - v4 < a2 )
    v4 = sub_100074FF(v22, (int)v23);
  v5 = v4 >> 1;
  if ( v4 >> 1 < 8 )
    v5 = 8;
  if ( v2 < v5 && v4 <= 0xFFFFFFF - v5 )
  {
    a2 = v5;
    v2 = v5;
  }
  v6 = *(_DWORD *)(this + 12) >> 2;
  v24 = (char *)sub_1000A362(v2 + v4);
  v7 = 4 * v6;
  v8 = 4 * ((int)(4 * *(_DWORD *)(this + 8) - 4 * v6) >> 2);
  v9 = &v24[4 * v6 + v8];
  Destination = v9;
  if ( (int)(4 * *(_DWORD *)(this + 8) - 4 * v6) >> 2 )
  {
    memmove_s(&v24[4 * v6], v8, (const void *const)(4 * v6 + *(_DWORD *)(this + 4)), v8);
    v9 = Destination;
  }
  if ( v6 > a2 )
  {
    v16 = 4 * a2;
    v17 = (int)(4 * a2) >> 2;
    if ( v17 )
      memmove_s(v9, 4 * v17, *(const void *const *)(this + 4), 4 * v17);
    v18 = (v7 - v16) >> 2;
    v10 = v18 == 0;
    v19 = 4 * v18;
    v20 = &v24[4 * v18];
    if ( !v10 )
      memmove_s(v24, v19, (const void *const)(*(_DWORD *)(this + 4) + v16), v19);
    v15 = a2;
    if ( a2 )
    {
      v14 = v20;
      goto LABEL_23;
    }
  }
  else
  {
    v11 = v7 >> 2;
    v10 = v11 == 0;
    v12 = 4 * v11;
    v13 = &v9[4 * v11];
    if ( !v10 )
      memmove_s(v9, v12, *(const void *const *)(this + 4), v12);
    if ( a2 != v6 )
      memset(v13, 0, 4 * (a2 - v6));
    if ( v6 )
    {
      v14 = v24;
      v15 = v6;
LABEL_23:
      memset(v14, 0, 4 * v15);
    }
  }
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  result = a2;
  *(_DWORD *)(this + 8) += a2;
  *(_DWORD *)(this + 4) = v24;
  return result;
}

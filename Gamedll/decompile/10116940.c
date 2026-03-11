/*
 * func-name: sub_10116940
 * func-address: 0x10116940
 * callers: 0x10007dc9
 * callees: none
 */

char *__thiscall sub_10116940(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  char *v4; // esi
  int v5; // ebx
  void (__thiscall *v6)(char *, char *); // edx
  char *v7; // esi
  _DWORD *v8; // edi
  int v9; // ebp
  void (__thiscall *v10)(char *, char *); // edx
  int v12; // [esp+10h] [ebp-8h]

  v2 = a2;
  v4 = this + 4;
  v5 = (char *)a2 - this;
  v12 = 9;
  do
  {
    v6 = *(void (__thiscall **)(char *, char *))(*(_DWORD *)v4 + 4);
    *((_DWORD *)v4 - 1) = *v2;
    v6(v4, &v4[v5]);
    *((_DWORD *)v4 + 11) = v2[12];
    v2 += 13;
    v4 += 52;
    --v12;
  }
  while ( v12 );
  v7 = this + 472;
  v8 = a2 + 117;
  v9 = 9;
  do
  {
    v10 = *(void (__thiscall **)(char *, char *))(*(_DWORD *)v7 + 4);
    *((_DWORD *)v7 - 1) = *v8;
    v10(v7, &v7[v5]);
    *((_DWORD *)v7 + 11) = v8[12];
    v8 += 13;
    v7 += 52;
    --v9;
  }
  while ( v9 );
  return this;
}

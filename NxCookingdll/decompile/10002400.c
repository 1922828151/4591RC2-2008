/*
 * func-name: sub_10002400
 * func-address: 0x10002400
 * callers: none
 * callees: 0x10001610, 0x10001830
 */

int __thiscall sub_10002400(char *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int *v6; // edi
  int v7; // edx
  char *v8; // eax
  int v9; // ecx
  int v10; // edx
  int (__thiscall *v11)(char *); // eax
  int result; // eax
  _DWORD *v13; // ecx
  unsigned int i; // edi
  int (__thiscall ***v15)(_DWORD); // ecx
  const char *v16; // [esp-4h] [ebp-10h]
  int v17; // [esp-4h] [ebp-10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
  v5 = a2;
  v6 = (int *)(this + 4);
  v16 = (const char *)a2;
  this[28] = 1;
  sub_10001610(this + 32820, v16);
  v7 = *((_DWORD *)this + 1);
  v17 = a3;
  *((_DWORD *)this + 8212) = a3;
  (*(void (__thiscall **)(char *, int, int))(v7 + 16))(this + 4, v5, v17);
  if ( this == (char *)-4 )
    v8 = 0;
  else
    v8 = this + 40;
  v9 = a4;
  v10 = *v6;
  *((_DWORD *)this + 8215) = v8;
  v11 = *(int (__thiscall **)(char *))(v10 + 12);
  *((_DWORD *)this + 8217) = v9;
  *((_DWORD *)this + 8216) = v6;
  result = v11(this + 4);
  if ( (_BYTE)result )
  {
    v13 = (_DWORD *)*((_DWORD *)this + 8215);
    a2 = 262254385;
    result = sub_10001830(v13, (int)&a2, 4u);
    for ( i = 0; i < (*((_DWORD *)this + 8223) - *((_DWORD *)this + 8222)) >> 2; ++i )
    {
      v15 = *(int (__thiscall ****)(_DWORD))(*((_DWORD *)this + 8222) + 4 * i);
      result = (**v15)(v15);
    }
  }
  return result;
}

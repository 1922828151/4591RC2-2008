/*
 * func-name: sub_100024C0
 * func-address: 0x100024c0
 * callers: none
 * callees: 0x100015a0
 */

char *__thiscall sub_100024C0(char *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // kr00_4
  char *v5; // edx
  char *result; // eax
  int v7; // edx
  char v8; // cl

  for ( i = 0; i < (*((_DWORD *)this + 8223) - *((_DWORD *)this + 8222)) >> 2; ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 8222) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
  (*(void (__thiscall **)(_DWORD *))(*((_DWORD *)this + 1) + 20))((_DWORD *)this + 1);
  v4 = strlen(byte_10049374);
  *((_DWORD *)this + 8211) = v4;
  sub_100015A0((int)(this + 32820), v4);
  v5 = (char *)*((_DWORD *)this + 8209);
  if ( !v5 )
    v5 = this + 32820;
  result = byte_10049374;
  v7 = v5 - byte_10049374;
  do
  {
    v8 = *result;
    result[v7] = *result;
    ++result;
  }
  while ( v8 );
  *((_DWORD *)this + 8212) = 0;
  *((_DWORD *)this + 8216) = 0;
  *((_DWORD *)this + 8215) = 0;
  return result;
}

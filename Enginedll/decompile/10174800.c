/*
 * func-name: ??0AsyncLoader@@QAE@XZ
 * func-address: 0x10174800
 * callers: 0x1001bda0
 * callees: 0x1001d800, 0x10175fb0, 0x10176910, 0x10176990, 0x10177930
 */

AsyncLoader *__thiscall AsyncLoader::AsyncLoader(AsyncLoader *this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  AsyncLoader *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  *(_DWORD *)this = &AsyncLoader::`vftable';
  *((_DWORD *)this + 1) = 0;
  v4 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  v5 = 0;
  sub_10176910(&v3, &v3);
  LOBYTE(v5) = 1;
  sub_10177930(&v3, &v3);
  LOBYTE(v5) = 2;
  *((_DWORD *)this + 27) = sub_1001D800();
  *((_DWORD *)this + 28) = 0;
  LOBYTE(v5) = 3;
  *((_DWORD *)this + 30) = sub_1001D800();
  *((_DWORD *)this + 31) = 0;
  LOBYTE(v5) = 4;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 5;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 6;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 7;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 8;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 9;
  sub_10175FB0(&v3, &v3);
  LOBYTE(v5) = 10;
  sub_10176990(&v3, &v3);
  return this;
}

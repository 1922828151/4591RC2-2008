/*
 * func-name: sub_10002B60
 * func-address: 0x10002b60
 * callers: 0x10006780, 0x100080a0
 * callees: 0x10001ca0
 */

int __thiscall sub_10002B60(_DWORD *this, FILE *Stream, int a3)
{
  int v4; // eax
  fpos_t Position; // [esp+4h] [ebp-4Ch] BYREF
  int v6[7]; // [esp+Ch] [ebp-44h] BYREF
  int v7[7]; // [esp+28h] [ebp-28h] BYREF
  int v8; // [esp+4Ch] [ebp-4h]

  if ( this[24] )
  {
    fgetpos(Stream, &Position);
    Position += 77LL;
    fsetpos(Stream, &Position);
    sub_10001CA0((int)v6, Stream);
    return std::string::~string(v6);
  }
  else
  {
    fread((void *)(a3 + 1428), 4u, 1u, Stream);
    fread((void *)(a3 + 1076), 0x48u, 1u, Stream);
    fread((void *)(a3 + 1420), 1u, 1u, Stream);
    v4 = sub_10001CA0((int)v7, Stream);
    v8 = 0;
    std::string::operator=(a3 + 1364, v4);
    v8 = -1;
    return std::string::~string(v7);
  }
}

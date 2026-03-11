/*
 * func-name: sub_10005A20
 * func-address: 0x10005a20
 * callers: 0x10006230
 * callees: 0x10001ca0, 0x10015b30, 0x100dd7c0
 */

int __stdcall sub_10005A20(FILE *Stream)
{
  FILE *v1; // esi
  int v2; // eax
  _BYTE Buffer[4]; // [esp+Ch] [ebp-74h] BYREF
  int v5[7]; // [esp+10h] [ebp-70h] BYREF
  _BYTE v6[72]; // [esp+2Ch] [ebp-54h] BYREF
  int v7; // [esp+7Ch] [ebp-4h]

  v1 = Stream;
  fread(Buffer, 4u, 1u, Stream);
  LightState::LightState((LightState *)v6);
  fread(v6, 0x48u, 1u, v1);
  fread(&Stream, 1u, 1u, v1);
  v2 = sub_10001CA0((int)v5, v1);
  v7 = 0;
  sub_10015B30(v2);
  v7 = -1;
  return std::string::~string(v5);
}

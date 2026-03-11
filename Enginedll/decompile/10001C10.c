/*
 * func-name: sub_10001C10
 * func-address: 0x10001c10
 * callers: 0x10001cf0, 0x10001fb0, 0x10002020, 0x10002270, 0x100028f0, 0x100042c0, 0x100049f0
 * callees: none
 */

int __cdecl sub_10001C10(char a1, int a2, int a3, int a4, int a5, int a6, int a7, FILE *Stream)
{
  int v8; // eax
  FILE *v9; // esi
  const void *v10; // eax
  size_t v12; // [esp-Ch] [ebp-24h]
  size_t Buffer; // [esp+8h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v14 = 0;
  v8 = std::string::length(&a1);
  v9 = Stream;
  Buffer = v8 + 2;
  fwrite(&Buffer, 4u, 1u, Stream);
  v12 = Buffer;
  v10 = (const void *)std::string::c_str(&a1);
  fwrite(v10, v12, 1u, v9);
  v14 = -1;
  return std::string::~string(&a1);
}

/*
 * func-name: sub_10001CA0
 * func-address: 0x10001ca0
 * callers: 0x10002b60, 0x10002c50, 0x10002f20, 0x10003130, 0x10003a50, 0x10005610, 0x10005900, 0x10005a20, 0x10005ad0, 0x10005d50, 0x10006230, 0x10006780, 0x100080a0, 0x10008f60
 * callees: none
 */

int __cdecl sub_10001CA0(int a1, FILE *Stream)
{
  size_t Buffer; // [esp+8h] [ebp-4h] BYREF

  Buffer = 0;
  fread(&Buffer, 4u, 1u, Stream);
  fread(&unk_10283308, Buffer, 1u, Stream);
  std::string::string(a1, &unk_10283308);
  return a1;
}

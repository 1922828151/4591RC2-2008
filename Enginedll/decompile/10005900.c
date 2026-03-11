/*
 * func-name: sub_10005900
 * func-address: 0x10005900
 * callers: 0x10005ad0
 * callees: 0x10001ca0, 0x10015b30
 */

char __stdcall sub_10005900(FILE *Buffer)
{
  FILE *v1; // esi
  FILE *i; // edi
  FILE *j; // edi
  int v4; // eax
  int v6[7]; // [esp+14h] [ebp-44h] BYREF
  int v7[7]; // [esp+30h] [ebp-28h] BYREF
  int v8; // [esp+54h] [ebp-4h]

  v1 = Buffer;
  sub_10001CA0((int)v7, Buffer);
  v8 = 0;
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v1);
  for ( i = 0; (int)i < (int)Buffer; i = (FILE *)((char *)i + 1) )
  {
    sub_10001CA0((int)v6, v1);
    std::string::~string(v6);
  }
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v1);
  for ( j = 0; (int)j < (int)Buffer; j = (FILE *)((char *)j + 1) )
  {
    sub_10001CA0((int)v6, v1);
    std::string::~string(v6);
  }
  v4 = sub_10001CA0((int)v6, v1);
  LOBYTE(v8) = 1;
  sub_10015B30(v4);
  LOBYTE(v8) = 0;
  std::string::~string(v6);
  fread(&unk_1028371C, 0xAu, 1u, v1);
  v8 = -1;
  std::string::~string(v7);
  return 1;
}

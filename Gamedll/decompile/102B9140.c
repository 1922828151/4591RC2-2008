/*
 * func-name: sub_102B9140
 * func-address: 0x102b9140
 * callers: 0x100087dd
 * callees: 0x102c9d62
 */

int __stdcall sub_102B9140(int a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9, float *a10)
{
  const char *v10; // eax
  char Buffer[128]; // [esp+28h] [ebp-90h] BYREF
  int v13; // [esp+B4h] [ebp-4h]

  v13 = 1;
  switch ( a2 )
  {
    case 5:
      sprintf(Buffer, "%d", *(_DWORD *)a10);
      break;
    case 6:
      sprintf(Buffer, "%f %f %f", *a10, a10[1], a10[2]);
      break;
    case 7:
      sprintf(Buffer, "%f", *a10);
      break;
    case 8:
      sprintf(Buffer, "%s", (const char *)a10);
      break;
    case 9:
      v10 = "true";
      if ( !*(_BYTE *)a10 )
        v10 = "false";
      sprintf(Buffer, "%s", v10);
      break;
    default:
      break;
  }
  std::string::string(a1, Buffer);
  LOBYTE(v13) = 0;
  std::string::~string(&a3);
  return a1;
}

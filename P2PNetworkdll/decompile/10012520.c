/*
 * func-name: sub_10012520
 * func-address: 0x10012520
 * callers: 0x100122f0, 0x10012390
 * callees: 0x100232d4, 0x100232da, 0x100232f7
 */

int sub_10012520()
{
  float v1; // [esp+4h] [ebp-1A0h]
  float v2; // [esp+4h] [ebp-1A0h]
  WSAData WSAData; // [esp+8h] [ebp-19Ch] BYREF

  if ( WSAStartup(0x202u, &WSAData) )
  {
    WSACleanup();
    return -994;
  }
  else
  {
    v1 = (double)HIBYTE(WSAData.wVersion) / 10.0;
    v2 = v1 + (double)LOBYTE(WSAData.wVersion);
    if ( v2 >= 2.2 )
    {
      return 0;
    }
    else
    {
      WSACleanup();
      return -993;
    }
  }
}

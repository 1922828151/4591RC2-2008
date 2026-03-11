/*
 * func-name: sub_10013790
 * func-address: 0x10013790
 * callers: 0x100132c0, 0x100134b0, 0x10013690
 * callees: 0x100112f0, 0x10011460, 0x10011530, 0x10011650, 0x10013a20, 0x100232f7, 0x100234da, 0x100234ec
 */

int __fastcall sub_10013790(const char *a1, int a2, char **a3, const char *a4, int a5)
{
  char *v5; // ecx
  int result; // eax
  char *v7; // esi
  void **v8; // ebp
  int v9; // edi
  int v10; // esi
  char **v11; // ebx
  const char *v12; // edi
  char *v13; // esi
  void **v14; // [esp+10h] [ebp-420h] BYREF
  const char *v15; // [esp+14h] [ebp-41Ch]
  int v16; // [esp+18h] [ebp-418h]
  int v17; // [esp+1Ch] [ebp-414h]
  int v18; // [esp+20h] [ebp-410h] BYREF
  char **v19; // [esp+24h] [ebp-40Ch]
  char v20[512]; // [esp+28h] [ebp-408h] BYREF
  char Destination[516]; // [esp+228h] [ebp-208h] BYREF

  v15 = a1;
  v17 = a2;
  v16 = a5;
  v5 = *a3;
  v19 = a3;
  result = sub_10013A20(v5, Destination, (int)v20, (int)&v18);
  if ( !result )
  {
    result = sub_100112F0(&v14, Destination, v20, v18, a4);
    if ( !result )
    {
      v7 = (char *)malloc(6u);
      if ( !v7 )
      {
LABEL_4:
        sub_10011530((int *)&v14);
        return -499;
      }
      sprintf(v7, "%5d", strlen(a4));
      v8 = v14;
      v9 = sub_10011460("Content-Length", (int)v14, v7);
      free(v7);
      if ( v9 )
        goto LABEL_6;
      v10 = sub_10011460("CONTENT-TYPE", (int)v8, "text/xml ; charset=\"utf-8\"");
      if ( v10 )
      {
        sub_10011530((int *)&v14);
        return v10;
      }
      else
      {
        v11 = v19;
        v12 = v15;
        v13 = (char *)malloc(strlen(v15) + strlen(v19[1]) + 37);
        if ( !v13 )
          goto LABEL_4;
        sprintf(v13, "\"urn:schemas-upnp-org:service:%s#%s\"", v11[1], v12);
        v9 = sub_10011460("SOAPACTION", (int)v8, v13);
        free(v13);
        if ( v9 )
        {
LABEL_6:
          sub_10011530((int *)&v14);
          return v9;
        }
        result = sub_10011650(v8, v17, v16);
        if ( !result )
        {
          sub_10011530((int *)&v14);
          return 0;
        }
      }
    }
  }
  return result;
}

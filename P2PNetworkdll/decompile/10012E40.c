/*
 * func-name: sub_10012E40
 * func-address: 0x10012e40
 * callers: 0x10012870
 * callees: 0x10013130, 0x10013a20, 0x1001ef60, 0x1001f170, 0x1001f2a0, 0x100232f7, 0x100234da, 0x100234ec
 */

int __fastcall sub_10012E40(char *a1, const char **a2, const char *a3)
{
  int result; // eax
  void ***v5; // ebp
  void *v6; // eax
  char *v7; // ecx
  _BYTE *v8; // edx
  char v9; // al
  const char *v10; // eax
  char *v11; // ecx
  char *v12; // edx
  char v13; // al
  char *v14; // eax
  void *v15[7]; // [esp-1Ch] [ebp-470h] BYREF
  int v16; // [esp+10h] [ebp-444h] BYREF
  const char **v17; // [esp+14h] [ebp-440h]
  void *Block[7]; // [esp+18h] [ebp-43Ch] BYREF
  void *v19[7]; // [esp+34h] [ebp-420h] BYREF
  char Buffer[512]; // [esp+50h] [ebp-404h] BYREF
  char Destination[512]; // [esp+250h] [ebp-204h] BYREF

  v17 = a2;
  memset(Block, 0, sizeof(Block));
  result = sub_10013A20(a1, Destination, 0, (int)&v16);
  if ( result )
    return result;
  sprintf(Buffer, "%s:%d", Destination, (__int16)v16);
  v5 = (void ***)sub_1001EF60();
  v6 = malloc(strlen(a2[1]) + 32);
  v15[5] = (void *)a2[1];
  Block[2] = v6;
  sprintf((char *const)v6, "urn:schemas-upnp-org:service:%s", (const char *)v15[5]);
  if ( v5[1] == *v5 )
  {
    *v5 = Block;
    v5[1] = Block;
  }
  else
  {
    *v5 = Block;
  }
  v5[10] = (void **)sub_10013170;
  v5[11] = (void **)sub_100131E0;
  v5[12] = (void **)sub_10013210;
  strlen(a3);
  if ( sub_1001F2A0(v5) )
  {
    if ( !Block[1] )
    {
      Block[1] = malloc(strlen(Buffer) + 1);
      v7 = Buffer;
      v8 = Block[1];
      do
      {
        v9 = *v7;
        *v8++ = *v7++;
      }
      while ( v9 );
    }
    if ( !strncmp((const char *)Block[0], "http://", 7u) )
    {
      v10 = (const char *)malloc(strlen((const char *)Block[0]) + 1);
      *v17 = v10;
      if ( !v10 )
      {
LABEL_18:
        qmemcpy(v15, Block, sizeof(v15));
        sub_10013130(v15[0], v15[1], v15[2]);
        return -499;
      }
      v11 = (char *)Block[0];
      v12 = (char *)v10;
      do
      {
        v13 = *v11;
        *v12++ = *v11++;
      }
      while ( v13 );
    }
    else
    {
      v14 = (char *)malloc(strlen((const char *)Block[0]) + strlen((const char *)Block[1]) + 1);
      *v17 = v14;
      if ( !v14 )
        goto LABEL_18;
      sprintf(v14, "%s%s", (const char *)Block[1], (const char *)Block[0]);
    }
    qmemcpy(v15, Block, sizeof(v15));
    sub_10013130(v15[0], v15[1], v15[2]);
    sub_1001F170(v5);
    if ( (unsigned int)(&(*v17)[strlen(*v17) + 1] - *v17) <= 0x200 )
      return 0;
    free((void *)*v17);
    return -695;
  }
  sub_1001F170(v5);
  qmemcpy(v19, Block, sizeof(v19));
  if ( Block[0] )
    free(Block[0]);
  if ( v19[1] )
    free(v19[1]);
  if ( v19[2] )
    free(v19[2]);
  return -699;
}

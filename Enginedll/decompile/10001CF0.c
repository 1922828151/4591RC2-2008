/*
 * func-name: sub_10001CF0
 * func-address: 0x10001cf0
 * callers: 0x100028f0, 0x100049f0
 * callees: 0x10001c10, 0x1017a970
 */

int __thiscall sub_10001CF0(_BYTE *this, int a2, int Buffer, char *a4, FILE *Stream)
{
  FILE *v5; // esi
  char v6; // bl
  int result; // eax
  int v8; // eax
  char v9; // al
  char *v10; // edi
  char *v11; // edx
  char v12; // [esp-20h] [ebp-98h] BYREF
  int v13; // [esp-1Ch] [ebp-94h]
  int v14; // [esp-18h] [ebp-90h]
  int v15; // [esp-14h] [ebp-8Ch]
  int v16; // [esp-10h] [ebp-88h]
  int v17; // [esp-Ch] [ebp-84h]
  int v18; // [esp-8h] [ebp-80h]
  FILE *v19; // [esp-4h] [ebp-7Ch]
  _BYTE *v20; // [esp+10h] [ebp-68h]
  int v21; // [esp+14h] [ebp-64h]
  _BYTE v22[28]; // [esp+18h] [ebp-60h] BYREF
  _BYTE v23[28]; // [esp+34h] [ebp-44h] BYREF
  _BYTE v24[28]; // [esp+50h] [ebp-28h] BYREF
  int v25; // [esp+74h] [ebp-4h]

  v5 = Stream;
  v19 = Stream;
  v20 = this;
  Stream = (FILE *)&v12;
  v6 = 0;
  v21 = 0;
  std::string::string(&v12, a2);
  sub_10001C10(v12, v13, v14, v15, v16, v17, v18, v19);
  fwrite(&Buffer, 4u, 1u, v5);
  result = Buffer;
  switch ( Buffer )
  {
    case 1:
      return fwrite(a4, 1u, 1u, v5);
    case 2:
    case 3:
      return fwrite(a4, 4u, 1u, v5);
    case 4:
      return fwrite(a4, 8u, 1u, v5);
    case 5:
      return fwrite(a4, 0xCu, 1u, v5);
    case 6:
      return fwrite(a4, 0x10u, 1u, v5);
    case 11:
      if ( !v20[96]
        || (v8 = std::string::string(v24, a2),
            v6 = 1,
            v25 = 0,
            v21 = 1,
            v9 = std::operator==<char>(v8, "ModelFilename"),
            LOBYTE(Stream) = 1,
            !v9) )
      {
        LOBYTE(Stream) = 0;
      }
      v25 = -1;
      if ( (v6 & 1) != 0 )
        std::string::~string(v24);
      v10 = a4;
      if ( (_BYTE)Stream )
      {
        std::string::string(v23, ".reb");
        v25 = 1;
        std::string::string(v22, ".xml");
        LOBYTE(v25) = 2;
        sub_1017A970(v10, v22, v23);
        LOBYTE(v25) = 1;
        std::string::~string(v22);
        v25 = -1;
        std::string::~string(v23);
      }
      v19 = v5;
      a4 = &v12;
      std::string::string(&v12, v10);
      return sub_10001C10(v12, v13, v14, v15, v16, v17, v18, v19);
  }
  if ( Buffer != 8 )
  {
    if ( Buffer != 12 )
    {
      if ( Buffer != 9 )
        return result;
      v19 = v5;
      v11 = a4 + 100;
      a4 = &v12;
      goto LABEL_26;
    }
    return fwrite(a4, 0x10u, 1u, v5);
  }
  v11 = a4;
  v19 = v5;
  Stream = (FILE *)&v12;
LABEL_26:
  std::string::string(&v12, v11);
  return sub_10001C10(v12, v13, v14, v15, v16, v17, v18, v19);
}

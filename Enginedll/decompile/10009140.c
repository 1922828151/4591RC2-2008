/*
 * func-name: sub_10009140
 * func-address: 0x10009140
 * callers: none
 * callees: 0x10006230, 0x10008f60, 0x10013650, 0x1007ec70
 */

char __thiscall sub_10009140(int *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  struct Editor *v10; // eax
  unsigned int v11; // ebx
  char *v12; // esi
  unsigned int v13; // ebp
  const char *v14; // eax
  FILE *v15; // eax
  FILE *v16; // esi
  int v17; // ebx
  int Buffer; // [esp+10h] [ebp-20h] BYREF
  fpos_t Position; // [esp+14h] [ebp-1Ch] BYREF
  _BYTE v21[8]; // [esp+1Ch] [ebp-14h] BYREF
  int v22; // [esp+2Ch] [ebp-4h]

  v22 = 0;
  std::string::operator=(this + 12, &a2);
  this[20] = a9;
  v10 = Editor::Instance();
  v11 = *((_DWORD *)v10 + 567);
  v12 = (char *)v10 + 2260;
  if ( *((_DWORD *)v10 + 566) > v11 )
    invalid_parameter_noinfo();
  v13 = *((_DWORD *)v12 + 1);
  if ( v13 > *((_DWORD *)v12 + 2) )
    invalid_parameter_noinfo();
  sub_10013650(v21, v12, v13, v12, v11);
  v14 = (const char *)std::string::c_str(&a2);
  v15 = fopen(v14, "rb");
  v16 = v15;
  if ( v15 )
  {
    fread(this + 11, 4u, 1u, v15);
    fread(this + 19, 4u, 1u, v16);
    fread(this + 9, 4u, 1u, v16);
    Position = this[19];
    fsetpos(v16, &Position);
    sub_10008F60(this, v16);
    Buffer = 0;
    fread(&Buffer, 4u, 1u, v16);
    v17 = 0;
    if ( Buffer <= 0 )
    {
LABEL_9:
      fclose(v16);
      v22 = -1;
      std::string::~string(&a2);
      return 1;
    }
    while ( sub_10006230(this, v16) )
    {
      if ( ++v17 >= Buffer )
        goto LABEL_9;
    }
    fclose(v16);
  }
  v22 = -1;
  std::string::~string(&a2);
  return 0;
}

/*
 * func-name: ?Create@Script@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
 * func-address: 0x10118c20
 * callers: 0x101198c0, 0x10131750
 * callees: 0x100977a0, 0x101196f0, 0x10119cc0, 0x10119d20
 */

char __thiscall Script::Create(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  const char *v8; // eax
  char *v9; // eax
  _BYTE *v10; // edx
  char v11; // cl
  int v12; // [esp-Ch] [ebp-10h]
  int v13; // [esp-8h] [ebp-Ch]
  int v14; // [esp-4h] [ebp-8h]

  v14 = std::string::c_str(a2);
  sub_10119CC0();
  v4 = sub_10119D20(v14);
  *this = v4;
  if ( v4 == -1 )
    return 0;
  v13 = std::string::c_str(a3);
  v12 = *this;
  sub_10119CC0();
  this[33] = sub_101196F0(v12, v13);
  v6 = Py_BuildValue("()");
  v7 = this[33];
  if ( v7 )
  {
    this[33] = PyInstance_New(v7, v6, 0);
    v9 = (char *)std::string::c_str(a3);
    v10 = this + 1;
    do
    {
      v11 = *v9;
      *v10++ = *v9++;
    }
    while ( v11 );
    return 1;
  }
  else
  {
    v8 = (const char *)std::string::c_str(a3);
    SeriousWarning("The file %s has a different class name than file name. They must match.", v8);
    return 0;
  }
}

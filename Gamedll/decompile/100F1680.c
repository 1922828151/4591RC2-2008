/*
 * func-name: sub_100F1680
 * func-address: 0x100f1680
 * callers: 0x10019484
 * callees: 0x10002f7c, 0x1000abc8, 0x1000ae2a, 0x1000f308, 0x100141e1, 0x102c23d0
 */

void __thiscall sub_100F1680(int *this, int a2, int a3)
{
  int *v4; // edi
  int v5; // eax
  const char *v6; // eax
  int NodeHandle; // eax
  const char *v8; // eax
  int v9; // eax
  _DWORD v10[7]; // [esp-10h] [ebp-70h] BYREF
  int v11; // [esp+Ch] [ebp-54h]
  _BYTE v12[64]; // [esp+20h] [ebp-40h] BYREF

  v4 = this + 7;
  if ( (unsigned __int8)std::operator!=<char>(this, this + 7) )
  {
    std::string::operator=(v4, this);
    if ( this[28] != -1 )
      sub_1000F308(this[28]);
    if ( (unsigned __int8)std::operator!=<char>(this, &unk_1031108F) )
    {
      v5 = sub_100141E1(a2, (int)this, 0);
      this[28] = v5;
      if ( v5 == -1 )
      {
        v6 = (const char *)std::string::c_str(this);
        LogPrintf("Create option of FX (%s) is Failed.", v6);
      }
    }
  }
  if ( (unsigned __int8)std::operator!=<char>(this + 14, this + 21) )
  {
    std::string::operator=(this + 21, this + 14);
    if ( a3 )
    {
      v11 = 0;
      std::string::string(v10, this + 14);
      NodeHandle = StaticModel::GetNodeHandle(a3, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11);
      this[29] = NodeHandle;
      if ( NodeHandle )
      {
        if ( sub_1000ABC8(this[28]) )
        {
          sub_1000AE2A(this[29] + 212);
          v9 = sub_102C23D0(v12);
          sub_10002F7C(v9);
        }
      }
      else
      {
        v8 = (const char *)std::string::c_str(this);
        LogPrintf("Create option of ModelFrame (%s) is Failed.", v8);
      }
    }
  }
}

/*
 * func-name: ?WriteSnapshot@Skill@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d30e0
 * callers: 0x10003233
 * callees: 0x10001dfc, 0x10008f30, 0x1000e575
 */

bool __thiscall GameClient::Skill::WriteSnapshot(GameClient::Skill *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  struct BinStream *v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax

  result = GameClient::DataObject::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) > *((_DWORD *)a2 + 2) )
    {
      v5 = a2;
    }
    else
    {
      v5 = *(struct BinStream **)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v4 + 4;
    }
    if ( v5 == (struct BinStream *)-1 )
    {
      LogPrintf("SkillUserID is invalid!");
    }
    else
    {
      v6 = sub_10001DFC((int)v5);
      *((_DWORD *)this + 5) = v6;
      if ( !v6 )
        LogPrintf("SkillUser:%d not found!", v5);
    }
    v7 = (_DWORD *)sub_10008F30((int)this + 24);
    v8 = v7[3];
    if ( (unsigned int)(v8 + 4) <= v7[2] )
    {
      *((_DWORD *)this + 4) = *(_DWORD *)(v8 + v7[1]);
      v7[3] += 4;
    }
    v9 = v7[3];
    if ( (unsigned int)(v9 + 4) <= v7[2] )
    {
      *((float *)this + 15) = *(float *)(v9 + v7[1]);
      v7[3] += 4;
    }
    v10 = v7[3];
    if ( (unsigned int)(v10 + 4) <= v7[2] )
    {
      *((float *)this + 16) = *(float *)(v10 + v7[1]);
      v7[3] += 4;
    }
    v11 = *((_DWORD *)a2 + 3);
    v12 = *((_DWORD *)this + 2);
    if ( (unsigned int)(v11 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(float *)(v12 + 148) = *(float *)(v11 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v13 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v13 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(float *)(v12 + 144) = *(float *)(v13 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v14 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v14 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v12 + 140) = *(_DWORD *)(v14 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}

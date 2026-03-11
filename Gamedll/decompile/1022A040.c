/*
 * func-name: ?OnReadVarComplete@FEstabDoor@GameClient@@UAEXXZ_0
 * func-address: 0x1022a040
 * callers: 0x10014786
 * callees: 0x100021b2
 */

void __thiscall GameClient::FEstabDoor::OnReadVarComplete(GameClient::FEstabDoor *this)
{
  _BYTE v2[28]; // [esp-1Ch] [ebp-2Ch] BYREF

  GameClient::FEstablishment::OnReadVarComplete(this);
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 520, &unk_1031BB2D)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 716, (char *)this + 520, (char *)this + 520, 1, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 520, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 548, &unk_1031BB2E)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 760, (char *)this + 548, (char *)this + 548, 1, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 548, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 576, &unk_1031BB2F)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 804, (char *)this + 576, (char *)this + 576, 1, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 576, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 660, &unk_1031BB42)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 980, (char *)this + 688, (char *)this + 688, 0, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 688, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 604, &unk_1031BB43)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 848, (char *)this + 604, (char *)this + 604, 0, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 604, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 632, &unk_1031BB53)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 892, (char *)this + 632, (char *)this + 632, 0, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 632, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 688, &unk_1031BB71)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 936, (char *)this + 660, (char *)this + 660, 0, 0, 0) )
  {
    qmemcpy(v2, (char *)this + 660, sizeof(v2));
    Error("Load Animation %s is failed");
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 660, &unk_1031BB72) )
  {
    if ( !(unsigned __int8)AnimationSet::Load((char *)this + 980, (char *)this + 688, (char *)this + 688, 0, 0, 0) )
    {
      qmemcpy(v2, (char *)this + 688, sizeof(v2));
      Error("Load Animation %s is failed");
    }
  }
}

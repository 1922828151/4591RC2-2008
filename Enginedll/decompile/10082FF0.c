/*
 * func-name: ??0ActorSelectedList@@QAE@H@Z
 * func-address: 0x10082ff0
 * callers: 0x10043960
 * callees: 0x10080920
 */

ActorSelectedList *__thiscall ActorSelectedList::ActorSelectedList(ActorSelectedList *this, int a2)
{
  char Buffer[12]; // [esp+10h] [ebp-18h] BYREF
  int v5; // [esp+24h] [ebp-4h]

  std::string::string(this);
  v5 = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  LOBYTE(v5) = 1;
  std::string::operator=(this, "SelectedList_");
  sprintf(Buffer, "%d", a2);
  std::string::append(this, Buffer);
  while ( Editor::FindActorSelectedList(Editor::inst, (int)this) )
  {
    sprintf(Buffer, "%d", ++*((_DWORD *)Editor::inst + 523));
    std::string::operator=(this, "SelectedList_");
    std::string::append(this, Buffer);
  }
  ++*((_DWORD *)Editor::inst + 523);
  return this;
}

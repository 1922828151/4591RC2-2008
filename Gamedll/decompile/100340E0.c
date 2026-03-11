/*
 * func-name: ??0Function@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100340e0
 * callers: 0x10012e09
 * callees: none
 */

GameClient::Function *__thiscall GameClient::Function::Function(
        GameClient::Function *this,
        const struct GameClient::Function *a2)
{
  GameClient::Function *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::Interactable::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *(_DWORD *)this = &GameClient::Function::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Function::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 36);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  return result;
}

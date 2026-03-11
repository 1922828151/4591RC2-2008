/*
 * func-name: ??0Interactable@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10033e20
 * callers: 0x10006fcd
 * callees: none
 */

GameClient::Interactable *__thiscall GameClient::Interactable::Interactable(
        GameClient::Interactable *this,
        const struct GameClient::Interactable *a2)
{
  GameClient::Interactable *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::Interactable::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return result;
}

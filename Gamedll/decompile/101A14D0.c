/*
 * func-name: ??4EstabDoor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101a14d0
 * callers: 0x100036c0
 * callees: 0x10017d32
 */

int __thiscall GameClient::EstabDoor::operator=(int this, int a2)
{
  void (__thiscall *v3)(int, int); // eax

  GameClient::Establishment::operator=(a2);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_BYTE *)(this + 464) = *(_BYTE *)(a2 + 464);
  *(_DWORD *)(this + 472) = *(_DWORD *)(a2 + 472);
  *(_DWORD *)(this + 476) = *(_DWORD *)(a2 + 476);
  *(_DWORD *)(this + 480) = *(_DWORD *)(a2 + 480);
  *(_DWORD *)(this + 484) = *(_DWORD *)(a2 + 484);
  *(_DWORD *)(this + 488) = *(_DWORD *)(a2 + 488);
  *(_DWORD *)(this + 492) = *(_DWORD *)(a2 + 492);
  *(_DWORD *)(this + 496) = *(_DWORD *)(a2 + 496);
  v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)(this + 508) + 4);
  *(_DWORD *)(this + 500) = *(_DWORD *)(a2 + 500);
  *(_DWORD *)(this + 504) = *(_DWORD *)(a2 + 504);
  v3(this + 508, a2 + 508);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 552) + 4))(this + 552, a2 + 552);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 596) + 4))(this + 596, a2 + 596);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 640) + 4))(this + 640, a2 + 640);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 684) + 4))(this + 684, a2 + 684);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 728) + 4))(this + 728, a2 + 728);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 772) + 4))(this + 772, a2 + 772);
  return this;
}

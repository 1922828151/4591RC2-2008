/*
 * func-name: ??4Establishment@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101279c0
 * callers: 0x10017d32
 * callees: 0x1000897c, 0x1000bdbb, 0x1000f088, 0x10011932, 0x100150be, 0x10016d24
 */

int __thiscall GameClient::Establishment::operator=(int this, int a2)
{
  int v3; // eax

  GameClient::WorldObject::operator=(a2);
  if ( a2 )
    v3 = a2 + 148;
  else
    v3 = 0;
  sub_1000BDBB(v3 + 4);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172);
  *(float *)(this + 176) = *(float *)(a2 + 176);
  *(float *)(this + 180) = *(float *)(a2 + 180);
  *(double *)(this + 184) = *(double *)(a2 + 184);
  sub_10011932(a2 + 192);
  std::vector<ModelFrame *>::operator=(this + 208, a2 + 208);
  std::vector<ModelFrame *>::operator=(this + 224, a2 + 224);
  sub_1000897C(a2 + 240);
  sub_100150BE(a2 + 256);
  std::string::operator=(this + 272, a2 + 272);
  *(_DWORD *)(this + 300) = *(_DWORD *)(a2 + 300);
  *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 304);
  *(_DWORD *)(this + 308) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(this + 312) = *(_DWORD *)(a2 + 312);
  *(_DWORD *)(this + 316) = *(_DWORD *)(a2 + 316);
  *(_DWORD *)(this + 320) = *(_DWORD *)(a2 + 320);
  *(_BYTE *)(this + 324) = *(_BYTE *)(a2 + 324);
  *(_DWORD *)(this + 328) = *(_DWORD *)(a2 + 328);
  *(_DWORD *)(this + 332) = *(_DWORD *)(a2 + 332);
  *(_DWORD *)(this + 336) = *(_DWORD *)(a2 + 336);
  *(float *)(this + 340) = *(float *)(a2 + 340);
  *(float *)(this + 344) = *(float *)(a2 + 344);
  *(_BYTE *)(this + 348) = *(_BYTE *)(a2 + 348);
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352);
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368);
  *(_BYTE *)(this + 372) = *(_BYTE *)(a2 + 372);
  sub_10016D24(a2 + 376);
  *(_DWORD *)(this + 392) = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  std::string::operator=(this + 400, a2 + 400);
  std::string::operator=(this + 428, a2 + 428);
  return this;
}

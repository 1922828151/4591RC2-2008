/*
 * func-name: ??1Seat@GameClient@@UAE@XZ_0
 * func-address: 0x101b19d0
 * callers: 0x1000cf22
 * callees: 0x100189e9, 0x10018d31, 0x102c9d50
 */

void __thiscall GameClient::Seat::~Seat(void **this)
{
  *this = &GameClient::Seat::`vftable';
  sub_100189E9();
  std::vector<ModelFrame *>::~vector<ModelFrame *>(this + 11);
  if ( this[8] )
    operator delete(this[8]);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  GameClient::DataObject::~DataObject((GameClient::DataObject *)this);
}

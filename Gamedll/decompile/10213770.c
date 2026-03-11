/*
 * func-name: sub_10213770
 * func-address: 0x10213770
 * callers: 0x10018b6a
 * callees: 0x10001181, 0x10002f31, 0x10004746, 0x10009ba1, 0x1000a5a1, 0x1000c252, 0x10016a4f, 0x10017fe9, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

CRobotRoofUI *__stdcall sub_10213770(int a1)
{
  int v1; // ebp
  Outpop::Message::Message *v2; // ecx
  Outpop::Message::Message *v3; // ecx
  CRobotRoofUI *result; // eax
  CRobotRoofUI *v5; // esi
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // eax
  char *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int i; // ebp
  char *v14; // esi
  int j; // ebp
  char *v16; // esi
  unsigned int v17; // esi
  int k; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int *v22; // esi
  Outpop::Utility::Ref_Object *v23; // [esp+18h] [ebp-138h] BYREF
  int v24; // [esp+1Ch] [ebp-134h] BYREF
  int v25; // [esp+20h] [ebp-130h] BYREF
  int v26; // [esp+24h] [ebp-12Ch] BYREF
  int v27; // [esp+28h] [ebp-128h] BYREF
  int v28; // [esp+2Ch] [ebp-124h]
  Outpop::Utility::Ref_Object *v29; // [esp+30h] [ebp-120h] BYREF
  char v30[4]; // [esp+34h] [ebp-11Ch] BYREF
  CRobotRoofUI *v31; // [esp+38h] [ebp-118h]
  int v32; // [esp+3Ch] [ebp-114h] BYREF
  int v33; // [esp+44h] [ebp-10Ch] BYREF
  _BYTE v34[136]; // [esp+4Ch] [ebp-104h] BYREF
  int v35; // [esp+D4h] [ebp-7Ch] BYREF
  int v36; // [esp+D8h] [ebp-78h] BYREF
  _BYTE v37[28]; // [esp+DCh] [ebp-74h] BYREF
  int v38; // [esp+F8h] [ebp-58h] BYREF
  int v39; // [esp+FCh] [ebp-54h] BYREF
  int v40; // [esp+100h] [ebp-50h] BYREF
  int v41; // [esp+104h] [ebp-4Ch] BYREF
  void *v42; // [esp+108h] [ebp-48h]
  void *Source; // [esp+10Ch] [ebp-44h]
  int v44; // [esp+110h] [ebp-40h]
  int v45; // [esp+114h] [ebp-3Ch] BYREF
  void *v46; // [esp+118h] [ebp-38h]
  void *v47; // [esp+11Ch] [ebp-34h]
  int v48; // [esp+120h] [ebp-30h]
  _BYTE v49[28]; // [esp+124h] [ebp-2Ch] BYREF
  int v50; // [esp+14Ch] [ebp-4h]

  v1 = a1;
  v28 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v23);
  v50 = 0;
  Outpop::Message::Message::reset_to_data(v2);
  v50 = -1;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  v3 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v23);
  v50 = 1;
  Outpop::Message::Message::reset_to_data(v3);
  v50 = -1;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  Event::GetRequestMessage(a1, &v23);
  v50 = 2;
  sub_10002F31((int)v30);
  v50 = -1;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  result = (CRobotRoofUI *)sub_10016A4F(v30[0]);
  v5 = result;
  if ( result )
  {
    v25 = 0;
    Event::GetAckMessage(a1, &v23);
    v50 = 3;
    sub_10001181((int)&v25);
    v50 = -1;
    if ( v23 )
      Outpop::Utility::Ref_Object::release(v23);
    v6 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v6);
    result = (CRobotRoofUI *)_RTDynamicCast(
                               Dialog,
                               0,
                               &CTYDialog `RTTI Type Descriptor',
                               &CRobotRoofUI `RTTI Type Descriptor',
                               0);
    v31 = result;
    v23 = 0;
    if ( v25 > 0 )
    {
      v8 = (char *)v5 + 196;
      while ( 2 )
      {
        std::string::string(v49);
        v50 = 4;
        std::string::string(v37);
        v42 = 0;
        Source = 0;
        v44 = 0;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        LOBYTE(v50) = 7;
        Event::GetAckMessage(v1, &v29);
        LOBYTE(v50) = 8;
        sub_10001181((int)&v35);
        sub_10017FE9((int)v49);
        LOBYTE(v50) = 7;
        if ( v29 )
          Outpop::Utility::Ref_Object::release(v29);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
          v34,
          v49,
          3,
          1);
        LOBYTE(v50) = 9;
        v9 = std::operator>><char>(v34, v37);
        v10 = std::istream::operator>>(v9, &v36);
        v11 = std::istream::operator>>(v10, &v38);
        v12 = std::istream::operator>>(v11, &v39);
        std::istream::operator>>(v12, &v40);
        v24 = 0;
        std::istream::operator>>(v34, &v24);
        for ( i = 0; i < v24; ++i )
        {
          std::istream::operator>>(v34, &v26);
          v14 = (char *)Source;
          if ( v42 && ((_BYTE *)Source - (_BYTE *)v42) >> 2 < (unsigned int)((v44 - (int)v42) >> 2) )
          {
            *(_DWORD *)Source = v26;
            Source = v14 + 4;
          }
          else
          {
            if ( v42 > Source )
              _invalid_parameter_noinfo();
            sub_1000A5A1((int)&v32, (int)&v41, v14, (int)&v26);
          }
        }
        std::istream::operator>>(v34, &v24);
        for ( j = 0; j < v24; ++j )
        {
          std::istream::operator>>(v34, &v27);
          v16 = (char *)v47;
          if ( v46 && ((_BYTE *)v47 - (_BYTE *)v46) >> 2 < (unsigned int)((v48 - (int)v46) >> 2) )
          {
            *(_DWORD *)v47 = v27;
            v47 = v16 + 4;
          }
          else
          {
            if ( v46 > v47 )
              _invalid_parameter_noinfo();
            sub_1000A5A1((int)&v33, (int)&v45, v16, (int)&v27);
          }
        }
        v17 = 0;
        for ( k = 0; ; k += 80 )
        {
          v19 = *((_DWORD *)v8 + 1);
          if ( !v19 || v17 >= (*((_DWORD *)v8 + 2) - v19) / 80 )
          {
            sub_10009BA1((int)&v35);
            goto LABEL_44;
          }
          v20 = *((_DWORD *)v8 + 1);
          if ( !v20 || v17 >= (*((_DWORD *)v8 + 2) - v20) / 80 )
            _invalid_parameter_noinfo();
          v21 = *((_DWORD *)v8 + 1);
          if ( *(_DWORD *)(v21 + k) == v35 )
            break;
          ++v17;
        }
        if ( !v21 || v17 >= (*((_DWORD *)v8 + 2) - v21) / 80 )
          _invalid_parameter_noinfo();
        v22 = (int *)(*((_DWORD *)v8 + 1) + 80 * v17);
        *v22 = v35;
        v22[1] = v36;
        std::string::operator=(v22 + 2, v37);
        v22[9] = v38;
        v22[10] = v39;
        v22[11] = v40;
        sub_1000C252((int)&v41);
        sub_1000C252((int)&v45);
LABEL_44:
        if ( v31 )
          CRobotRoofUI::OnQuickSuiteUpdated(v31, v35);
        LOBYTE(v50) = 7;
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v34);
        LOBYTE(v50) = 4;
        if ( v46 )
          operator delete(v46);
        v46 = 0;
        v47 = 0;
        v48 = 0;
        if ( v42 )
          operator delete(v42);
        v42 = 0;
        Source = 0;
        v44 = 0;
        std::string::~string(v37);
        v50 = -1;
        std::string::~string(v49);
        result = (Outpop::Utility::Ref_Object *)((char *)v23 + 1);
        v23 = (Outpop::Utility::Ref_Object *)((char *)v23 + 1);
        if ( (int)v23 < v25 )
        {
          v1 = v28;
          continue;
        }
        break;
      }
    }
  }
  return result;
}

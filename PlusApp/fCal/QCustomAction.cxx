/*=Plus=header=begin======================================================
Program: Plus
Copyright (c) Laboratory for Percutaneous Surgery. All rights reserved.
See License.txt for details.
=========================================================Plus=header=end*/ 

#include "QCustomAction.h"

QCustomAction::QCustomAction(const QString &text, QObject* parent, bool aIsSeparator, vtkPlusDevice* ownerDevice, vtkPlusChannel* ownerChannel)
: QAction(text, parent)
, m_IsSeparator(aIsSeparator)
, m_OwnerDevice(ownerDevice)
, m_OwnerChannel(ownerChannel)
{

}

void QCustomAction::activated()
{
  emit channelSelected(m_OwnerDevice, m_OwnerChannel);
}
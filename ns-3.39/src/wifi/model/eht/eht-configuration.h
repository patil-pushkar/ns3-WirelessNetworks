/*
 * Copyright (c) 2021 DERONNE SOFTWARE ENGINEERING
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Sébastien Deronne <sebastien.deronne@gmail.com>
 */

#ifndef EHT_CONFIGURATION_H
#define EHT_CONFIGURATION_H

#include "ns3/nstime.h"
#include "ns3/object.h"

namespace ns3
{

/**
 * \brief EHT configuration
 * \ingroup wifi
 *
 * This object stores EHT configuration information, for use in modifying
 * AP or STA behavior and for constructing EHT-related information elements.
 *
 */
class EhtConfiguration : public Object
{
  public:
    EhtConfiguration();
    ~EhtConfiguration() override;

    /**
     * \brief Get the type ID.
     * \return the object TypeId
     */
    static TypeId GetTypeId();

  private:
    bool m_emlsrActivated;    //!< whether EMLSR option is activated
    Time m_transitionTimeout; //!< Transition timeout
};

} // namespace ns3

#endif /* EHT_CONFIGURATION_H */

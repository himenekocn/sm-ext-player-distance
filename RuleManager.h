#pragma once
#ifndef _INCLUDE_COMPUTE_RULEMANAGER_EVENTS_H_
#define _INCLUDE_COMPUTE_RULEMANAGER_EVENTS_H_
#include <vector>
#include "extension.h"
#include "Rule.h"

class RuleManager : public IHandleTypeDispatch
{
private:
    std::vector<Rule*> m_rules;

public:
    virtual void OnHandleDestroy(HandleType_t type, void *object) override;

    Rule* CreateRule(const int32_t client);
    void Run(const distance_matrix_t & distanceMatrix);
};

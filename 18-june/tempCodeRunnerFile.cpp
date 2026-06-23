    while (i < alen)
    {
        if (temp.empty() || temp.back() != a[i])
        {

            temp.push_back(a[i]);
        }
        i++;
    }
    while (j < blen)
    {
        if (temp.empty() || temp.back() != b[j])
        {

            temp.push_back(b[j]);
        }
        j++;
    }